/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:22:57 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/AppleIDSSOAuthentication.framework/AppleIDSSOAuthentication
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <AppleIDSSOAuthentication/AppleIDSSOAuthentication-Structs.h>
#import <AppleIDSSOAuthentication/AIDAServiceContext.h>

@class NSDictionary, UIViewController;

@interface AIDAMutableServiceContext : AIDAServiceContext

@property (nonatomic,copy) NSDictionary * authenticationResults; 
@property (assign,nonatomic) BOOL shouldForceOperation; 
@property (assign,nonatomic) long long operationUIPermissions; 
@property (nonatomic,retain) UIViewController * viewController; 
@property (nonatomic,retain) NSDictionary * signInContexts; 
@property (nonatomic,retain) NSDictionary * signOutContexts; 
@property (nonatomic,retain) id<AASignInFlowControllerDelegate> aaSignInFlowControllerDelegate; 
@property (nonatomic,retain) id<AASignOutFlowControllerDelegate> aaSignOutFlowControllerDelegate; 
@property (assign,nonatomic,__weak) id<CDPStateUIProvider> cdpUiProvider; 
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)mutableCopyWithZone:(NSZone*)arg1 ;
-(void)setSignInContexts:(NSDictionary *)arg1 ;
-(void)setSignOutContexts:(NSDictionary *)arg1 ;
-(void)setAuthenticationResults:(NSDictionary *)arg1 ;
-(void)setShouldForceOperation:(BOOL)arg1 ;
-(void)setOperationUIPermissions:(long long)arg1 ;
-(void)setAaSignInFlowControllerDelegate:(id<AASignInFlowControllerDelegate>)arg1 ;
-(void)setAaSignOutFlowControllerDelegate:(id<AASignOutFlowControllerDelegate>)arg1 ;
-(void)setCdpUiProvider:(id<CDPStateUIProvider>)arg1 ;
-(void)setViewController:(UIViewController *)arg1 ;
@end

