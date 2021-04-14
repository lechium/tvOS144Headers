/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:32:39 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/ATVLegacyContentKit.framework/ATVLegacyContentKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <ATVLegacyContentKit/TVLMenuItemElement.h>

@class NSString;

@interface TVLSignInSignOutMenuItemElement : TVLMenuItemElement {

	BOOL _signOutExitsApp;
	NSString* _confirmationTitle;
	NSString* _confirmationDescription;
	NSString* _signInPageURL;

}

@property (assign,nonatomic) BOOL signOutExitsApp;                          //@synthesize signOutExitsApp=_signOutExitsApp - In the implementation block
@property (nonatomic,copy) NSString * confirmationTitle;                    //@synthesize confirmationTitle=_confirmationTitle - In the implementation block
@property (nonatomic,copy) NSString * confirmationDescription;              //@synthesize confirmationDescription=_confirmationDescription - In the implementation block
@property (nonatomic,copy) NSString * signInPageURL;                        //@synthesize signInPageURL=_signInPageURL - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(NSString *)confirmationTitle;
-(void)setConfirmationTitle:(NSString *)arg1 ;
-(id)initWithXMLElement:(id)arg1 parentFeedElement:(id)arg2 ;
-(void)setSignOutExitsApp:(BOOL)arg1 ;
-(void)setConfirmationDescription:(NSString *)arg1 ;
-(void)setSignInPageURL:(NSString *)arg1 ;
-(BOOL)signOutExitsApp;
-(NSString *)confirmationDescription;
-(NSString *)signInPageURL;
@end

