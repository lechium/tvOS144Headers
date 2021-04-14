/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:29:50 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/SecurityFoundation.framework/SecurityFoundation
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <SecurityFoundation/SecurityFoundation-Structs.h>
#import <libobjc.A.dylib/SFPseudoRandomFunction.h>

@class NSString;

@interface SFHMACPseudoRandomFunction : NSObject <SFPseudoRandomFunction> {

	id _hmacPseudoRandomFunctionInternal;

}

@property (nonatomic,copy) id<SFDigestOperation> digestOperation; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)supportsSecureCoding;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)init;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id<SFDigestOperation>)digestOperation;
-(id)initWithDigestOperation:(id)arg1 ;
-(void)setDigestOperation:(id<SFDigestOperation>)arg1 ;
-(id)generateBytesWithLength:(long long)arg1 key:(id)arg2 error:(id)arg3 ;
@end

