// Copyright (c) 2020 The UZLO CORE developers
// Distributed under the MIT software license, see the accompanying
// file COPYING or http://www.opensource.org/licenses/mit-license.php.

#ifndef PHORE_ACCUMULATORCHECKPOINTS_H
#define PHORE_ACCUMULATORCHECKPOINTS_H

#include <libzerocoin/bignum.h>
#include <univalue/include/univalue.h>

namespace AccumulatorCheckpoints
{
    typedef std::map<libzerocoin::CoinDenomination, CBigNum> Checkpoint;
    extern std::map<int, Checkpoint> mapCheckpoints;

    UniValue read_json(const std::string& jsondata);
    bool LoadCheckpoints(const std::string& strNetwork);
    Checkpoint GetClosestCheckpoint(const int& nHeight, int& nHeightCheckpoint);
}

#endif //PHORE_ACCUMULATORCHECKPOINTS_H
