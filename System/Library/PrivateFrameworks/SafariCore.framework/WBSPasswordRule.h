/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:24:37 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/SafariCore.framework/SafariCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@interface WBSPasswordRule : NSObject {

	long long _type;
	id _value;

}

@property (nonatomic,readonly) long long type;              //@synthesize type=_type - In the implementation block
@property (nonatomic,readonly) id value;                    //@synthesize value=_value - In the implementation block
+(id)ruleWithType:(long long)arg1 value:(id)arg2 ;
-(long long)type;
-(id)value;
-(id)initWithPasswordRuleType:(long long)arg1 value:(id)arg2 ;
@end
