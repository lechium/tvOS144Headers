/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:32:35 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/Frameworks/TVServices.framework/TVServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <TVServices/TVSSerialTransactionManagerPolicy.h>

@class NSString;

@interface TVSSerialTransactionManagerPolicyAppend : NSObject <TVSSerialTransactionManagerPolicy>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)resultingQueueAfterAddingTransaction:(id)arg1 inCurrentQueue:(id)arg2 ;
-(long long)actionOnRunningTransaction:(id)arg1 afterAddingTransaction:(id)arg2 ;
@end
