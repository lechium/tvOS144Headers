/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:26:34 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <PassKitCore/PKAddSecureElementPassConfiguration.h>

@class NSString;

@interface PKAddCarKeyPassConfiguration : PKAddSecureElementPassConfiguration {

	NSString* _password;
	NSString* _appIdentifier;

}

@property (nonatomic,copy) NSString * appIdentifier;              //@synthesize appIdentifier=_appIdentifier - In the implementation block
@property (nonatomic,copy) NSString * password;                   //@synthesize password=_password - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)init;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)password;
-(void)setPassword:(NSString *)arg1 ;
-(void)setAppIdentifier:(NSString *)arg1 ;
-(NSString *)appIdentifier;
@end

