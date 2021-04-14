/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:22:01 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/ContactsFoundation.framework/ContactsFoundation
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol CNTCC
@required
-(long long)checkAuthorizationStatusOfCurrentProcess;
-(long long)checkAuthorizationStatusOfAuditToken:(SCD_Struct_CN1)arg1;
-(BOOL)isAuthorizationRestricted;
-(void)requestAuthorization:(long long)arg1 completionHandler:(/*^block*/id)arg2;

@end

