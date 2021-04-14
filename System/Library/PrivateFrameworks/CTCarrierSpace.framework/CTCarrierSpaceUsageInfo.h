/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:29:35 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/CTCarrierSpace.framework/CTCarrierSpace
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSArray, NSString;

@interface CTCarrierSpaceUsageInfo : NSObject <NSSecureCoding> {

	NSArray* _accountMetrics;
	NSString* _moreDetailsURL;

}

@property (nonatomic,retain) NSArray * accountMetrics;               //@synthesize accountMetrics=_accountMetrics - In the implementation block
@property (nonatomic,retain) NSString * moreDetailsURL;              //@synthesize moreDetailsURL=_moreDetailsURL - In the implementation block
+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg1 ;
-(id)description;
-(id)init;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSArray *)accountMetrics;
-(void)setAccountMetrics:(NSArray *)arg1 ;
-(NSString *)moreDetailsURL;
-(void)setMoreDetailsURL:(NSString *)arg1 ;
@end

