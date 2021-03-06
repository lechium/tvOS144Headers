/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:20:25 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/Frameworks/CoreTelephony.framework/CoreTelephony
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <CoreTelephony/CoreTelephony-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSData, NSNumber, NSArray;

@interface CTPNRRequestType : NSObject <NSCopying, NSSecureCoding> {

	NSData* _pushToken;
	NSNumber* _attemptCount;
	NSArray* _pnrReqList;

}

@property (nonatomic,retain) NSData * pushToken;                   //@synthesize pushToken=_pushToken - In the implementation block
@property (nonatomic,retain) NSNumber * attemptCount;              //@synthesize attemptCount=_attemptCount - In the implementation block
@property (nonatomic,retain) NSArray * pnrReqList;                 //@synthesize pnrReqList=_pnrReqList - In the implementation block
+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(id)init;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSData *)pushToken;
-(NSNumber *)attemptCount;
-(NSArray *)pnrReqList;
-(void)setAttemptCount:(NSNumber *)arg1 ;
-(BOOL)isEqualToCTPNRRequestType:(id)arg1 ;
-(void)setPushToken:(NSData *)arg1 ;
-(void)setPnrReqList:(NSArray *)arg1 ;
@end

