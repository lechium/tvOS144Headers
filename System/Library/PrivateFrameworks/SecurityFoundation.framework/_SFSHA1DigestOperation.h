/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:29:50 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/SecurityFoundation.framework/SecurityFoundation
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <SecurityFoundation/SecurityFoundation-Structs.h>
#import <libobjc.A.dylib/SFDigestOperationInternal.h>
#import <libobjc.A.dylib/SFDigestOperation.h>

@class NSData, NSString;

@interface _SFSHA1DigestOperation : NSObject <SFDigestOperationInternal, SFDigestOperation> {

	id _sha1DigestOperationInternal;

}

@property (getter=_secKeyECDSAAlgorithm,nonatomic,readonly) const CFStringRef secKeyECDSAAlgorithm; 
@property (getter=_ccDigestInfo,nonatomic,readonly) const ccdigest_info* ccDigestInfo; 
@property (copy,readonly) NSData * hashValue; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)supportsSecureCoding;
+(long long)outputSize;
+(long long)blockSize;
+(id)digest:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)init;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSData *)hashValue;
-(void)addData:(id)arg1 ;
-(const CFStringRef)_secKeyECDSAAlgorithm;
@end

