/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:32:00 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/Frameworks/AuthenticationServices.framework/AuthenticationServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <AuthenticationServices/ASAuthorizationOpenIDRequest.h>

@class NSString;

@interface ASAuthorizationAppleIDRequest : ASAuthorizationOpenIDRequest {

	NSString* _user;

}

@property (nonatomic,copy) NSString * user;              //@synthesize user=_user - In the implementation block
-(NSString *)user;
-(void)setUser:(NSString *)arg1 ;
@end
