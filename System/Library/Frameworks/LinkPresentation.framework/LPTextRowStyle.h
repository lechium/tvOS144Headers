/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:32:07 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/Frameworks/LinkPresentation.framework/LinkPresentation
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class LPTextViewStyle;

@interface LPTextRowStyle : NSObject {

	LPTextViewStyle* _leading;
	LPTextViewStyle* _trailing;
	long long _balancingMode;

}

@property (nonatomic,readonly) LPTextViewStyle * leading;               //@synthesize leading=_leading - In the implementation block
@property (nonatomic,readonly) LPTextViewStyle * trailing;              //@synthesize trailing=_trailing - In the implementation block
@property (assign,nonatomic) long long balancingMode;                   //@synthesize balancingMode=_balancingMode - In the implementation block
-(id)left;
-(id)right;
-(LPTextViewStyle *)leading;
-(id)initWithPlatform:(long long)arg1 ;
-(LPTextViewStyle *)trailing;
-(void)applyToAllTextViewStyles:(/*^block*/id)arg1 ;
-(long long)balancingMode;
-(void)setBalancingMode:(long long)arg1 ;
@end
