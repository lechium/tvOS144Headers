/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:29:51 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/SecurityFoundation.framework/SecurityFoundation
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


#import <SecurityFoundation/SecurityFoundation-Structs.h>
@class NSString, NSData;

@interface SFCertificate_Ivars : NSObject {

	long long certificateType;
	NSString* subject;
	NSString* issuerName;
	NSData* serialNumber;
	SecCertificateRef secCertificate;

}
@end

