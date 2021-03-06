/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:31:56 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/Accounts/Authentication/AppleIDAuthentication.bundle/AppleIDAuthentication
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


#import <AppleIDAuthentication/AppleIDAuthentication-Structs.h>
@interface AppleIDTokenMigrator : NSObject
-(id)_potentialServiceNamesForTokenOfAccount:(id)arg1 ;
-(id)_mostRecentTokenWithServiceName:(id)arg1 matchingAccountNames:(id)arg2 ;
-(void)_removeKeychainItemForUsernames:(id)arg1 services:(id)arg2 ;
-(CFDictionaryRef)_newKeychainQueryForAllItemsMatchingAccountName:(id)arg1 serviceName:(id)arg2 ;
-(id)migrateAppleIDBasedCredentialForAccount:(id)arg1 ;
@end

