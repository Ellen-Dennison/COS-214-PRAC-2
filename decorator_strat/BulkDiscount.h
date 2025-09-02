#ifndef BULKDISCOUNT_H
#define BULKDISCOUNT_H
#include "DiscountStrategy.h"

class BulkDiscount : public DiscountStrategy{
    virtual double applyDiscount();
};
#endif
