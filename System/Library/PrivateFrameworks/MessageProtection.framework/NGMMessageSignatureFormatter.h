/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:22:44 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/MessageProtection.framework/MessageProtection
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/SignatureFormatter.h>

@class NSData, NSString;

@interface NGMMessageSignatureFormatter : NSObject <SignatureFormatter> {

	NSData* _formattedSignedData;

}

@property (nonatomic,readonly) NSData * formattedSignedData;              //@synthesize formattedSignedData=_formattedSignedData - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)signedData;
-(id)initWithDHOutput:(id)arg1 prekeyPub:(id)arg2 ephemeralPub:(id)arg3 recipientPub:(id)arg4 ciphertext:(id)arg5 ;
-(NSData *)formattedSignedData;
@end

