// Copyright (c) 2019 The PIVX developers
// Copyright (c) 2020 The Supernode Coin developers
// Distributed under the MIT software license, see the accompanying
// file COPYING or http://www.opensource.org/licenses/mit-license.php.

#ifndef SupernodeCoin_PAIRRESULT_H
#define SupernodeCoin_PAIRRESULT_H


class PairResult {

public:
    PairResult(bool res):result(res){}
    PairResult(bool res, std::string* statusStr):result(res), status(statusStr){}

    bool result;
    std::string* status = nullptr;
};


#endif //SupernodeCoin_PAIRRESULT_H
