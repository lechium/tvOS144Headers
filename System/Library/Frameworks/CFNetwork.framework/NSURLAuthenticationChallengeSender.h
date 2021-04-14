/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:19:52 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/Frameworks/CFNetwork.framework/CFNetwork
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol NSURLAuthenticationChallengeSender <NSObject>
@optional
-(void)performDefaultHandlingForAuthenticationChallenge:(id)arg1;
-(void)rejectProtectionSpaceAndContinueWithChallenge:(id)arg1;

@required
-(void)useCredential:(id)arg1 forAuthenticationChallenge:(id)arg2;
-(void)continueWithoutCredentialForAuthenticationChallenge:(id)arg1;
-(void)cancelAuthenticationChallenge:(id)arg1;

@end
