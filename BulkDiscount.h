#ifndef BULKDISCOUNT_H
#define BULKDISCOUNT_H
#include "DiscountStrategy.h"

class BulkDiscount : public DiscountStrategy{
    double applyDiscount();
};
#endif
