/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:29:11 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/CloudDocs.framework/CloudDocs
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/BRContainerHelper.h>

@class NSString;

@interface BRFrameworkContainerHelper : NSObject <BRContainerHelper>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)sharedFolderForURL:(id)arg1 error:(id*)arg2 ;
-(id)itemIDForURL:(id)arg1 error:(id*)arg2 ;
-(unsigned short)br_capabilityToMoveFromURL:(id)arg1 toNewParent:(id)arg2 error:(id*)arg3 ;
-(id)fetchContainerForURL:(id)arg1 ;
-(id)fetchAllContainersByIDWithError:(id*)arg1 ;
-(BOOL)canFetchAllContainersByID;
@end

