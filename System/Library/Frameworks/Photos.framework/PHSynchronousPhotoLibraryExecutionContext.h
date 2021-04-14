/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:24:29 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/Frameworks/Photos.framework/Photos
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/PHPhotoLibraryExecutionContext.h>

@class NSString;

@interface PHSynchronousPhotoLibraryExecutionContext : NSObject <PHPhotoLibraryExecutionContext>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)synchronousExecutionContext;
-(void)dispatchOnQueue:(id)arg1 block:(/*^block*/id)arg2 ;
-(void)sendChangesRequest:(id)arg1 onClient:(id)arg2 reply:(/*^block*/id)arg3 ;
-(void)callTransactionCompletionHandler:(/*^block*/id)arg1 withSuccess:(BOOL)arg2 error:(id)arg3 ;
@end

