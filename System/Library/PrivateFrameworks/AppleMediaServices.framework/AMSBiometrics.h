/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:33:25 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/AppleMediaServices.framework/AppleMediaServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


#import <AppleMediaServices/AppleMediaServices-Structs.h>
@interface AMSBiometrics : NSObject
+(long long)type;
+(long long)deviceState;
+(void)setDeviceState:(long long)arg1 ;
+(id)setState:(long long)arg1 forAccount:(id)arg2 ;
+(BOOL)deleteKeysWithError:(id*)arg1 ;
+(id)ACLVersionForConstraints:(id)arg1 ;
+(BOOL)isActionSupported:(long long)arg1 withConstraints:(id)arg2 ;
+(id)minimumACLVersionForAction:(long long)arg1 ;
+(BOOL)_deleteKeysWithOptions:(id)arg1 error:(id*)arg2 ;
+(id)signChallenge:(id)arg1 withAccount:(id)arg2 clientInfo:(id)arg3 options:(id)arg4 ;
+(id)_stateHeaderValueForAccount:(id)arg1 ;
+(long long)stateForAccount:(id)arg1 ;
+(id)identityMap;
+(BOOL)isIdentityMapValid;
+(id)ACLVersionForAccessControl:(SecAccessControlRef)arg1 ;
+(id)disableForAccount:(id)arg1 ;
+(id)handleResponse:(id)arg1 session:(id)arg2 taskInfo:(id)arg3 ;
+(id)headersWithAccount:(id)arg1 options:(id)arg2 signatureResult:(id)arg3 ;
+(BOOL)isActionSupported:(long long)arg1 withAccessControl:(SecAccessControlRef)arg2 ;
+(BOOL)isAvailableForAccount:(id)arg1 ;
+(id)resumptionHeadersFromRequest:(id)arg1 ;
+(void)saveIdentityMap;
+(BOOL)_shouldAddBiometricHeader;
@end

