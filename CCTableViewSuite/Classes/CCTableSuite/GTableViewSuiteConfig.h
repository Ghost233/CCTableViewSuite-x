//
//  GTableViewSuiteConfig.h
//  CCTableViewSuite
//
//  Created by Ghost on 12-9-11.
//
//

#ifndef CCTableViewSuite_GTableViewSuiteConfig_h
#define CCTableViewSuite_GTableViewSuiteConfig_h

#define G_PROPERTY_DEFINE(varType, varName, funName)\
protected: varType varName;\
public: virtual varType get##funName(void);\
public: virtual void set##funName(varType var);

#define G_SYNTHESIZE_IMPLEMENT(varType, varName, funName, prefix)    \
varType prefix::get##funName(void) { return varName; } \
void prefix::set##funName(varType var)   \
{ \
if (varName != var) \
{ \
CC_SAFE_RETAIN(var); \
CC_SAFE_RELEASE(varName); \
varName = var; \
} \
}

#define G_SYNTHESIZE_IMPLEMENT_SET(varType, varName, funName, prefix)    \
void prefix::set##funName(const varType& var){ varName = var; }

#define G_SYNTHESIZE_IMPLEMENT_SET_RETAIN(varType, varName, funName, prefix)    \
void prefix::set##funName(varType var)   \
{ \
if (varName != var) \
{ \
CC_SAFE_RETAIN(var); \
CC_SAFE_RELEASE(varName); \
varName = var; \
} \
}

#define G_SYNTHESIZE_IMPLEMENT_GET(varType, varName, funName, prefix)    \
varType prefix::get##funName(void) { return varName; } 

typedef enum
{
    GScrollViewDirectionHorizontal,
    GScrollViewDirectionVertical,
    GScrollViewDirectionBoth,
}GScrollViewDirection;

#endif
