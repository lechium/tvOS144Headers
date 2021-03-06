/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:22:54 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/IDSFoundation.framework/IDSFoundation
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <IDSFoundation/IDSFoundation-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface IDSCTPNRValidationMechanism : NSObject <NSCopying> {

	long long _type;
	NSString* _context;

}

@property (nonatomic,readonly) long long type;                  //@synthesize type=_type - In the implementation block
@property (nonatomic,readonly) NSString * context;              //@synthesize context=_context - In the implementation block
+(id)SMSMechanismWithContext:(id)arg1 ;
+(id)SMSLessMechanism;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(long long)type;
-(NSString *)context;
-(id)initWithType:(long long)arg1 context:(id)arg2 ;
@end

