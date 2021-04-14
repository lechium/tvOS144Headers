/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:26:03 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/Frameworks/VideoSubscriberAccount.framework/VideoSubscriberAccount
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/NSSecureCoding.h>

@interface VSOptional : NSObject <NSSecureCoding> {

	id _object;

}

@property (nonatomic,retain) id object;              //@synthesize object=_object - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)decodableClasses;
+(id)optionalWithObject:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)init;
-(void)setObject:(id)arg1 ;
-(id)initWithObject:(id)arg1 ;
-(id)object;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)forceUnwrapObject;
-(id)unwrapWithFallback:(id)arg1 ;
-(void)conditionallyUnwrapObject:(/*^block*/id)arg1 ;
-(void)conditionallyUnwrapObject:(/*^block*/id)arg1 otherwise:(/*^block*/id)arg2 ;
@end

