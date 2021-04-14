/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:35:55 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/SiriActivation.framework/SiriActivation
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <SiriActivation/SiriActivation-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@interface SiriPresentationOptions : NSObject <NSCopying, NSSecureCoding> {

	BOOL _wakeScreen;
	BOOL _hideOtherWindowsDuringAppearance;
	long long _rotationStyle;

}

@property (assign,nonatomic) BOOL wakeScreen;                                    //@synthesize wakeScreen=_wakeScreen - In the implementation block
@property (assign,nonatomic) BOOL hideOtherWindowsDuringAppearance;              //@synthesize hideOtherWindowsDuringAppearance=_hideOtherWindowsDuringAppearance - In the implementation block
@property (assign,nonatomic) long long rotationStyle;                            //@synthesize rotationStyle=_rotationStyle - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(id)init;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)setWakeScreen:(BOOL)arg1 ;
-(void)setRotationStyle:(long long)arg1 ;
-(BOOL)wakeScreen;
-(BOOL)hideOtherWindowsDuringAppearance;
-(long long)rotationStyle;
-(void)setHideOtherWindowsDuringAppearance:(BOOL)arg1 ;
@end

