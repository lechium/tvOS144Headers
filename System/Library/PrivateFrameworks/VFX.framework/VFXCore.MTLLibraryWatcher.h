/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:38:20 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/VFX.framework/VFX
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/NSFilePresenter.h>

@class NSURL, NSOperationQueue, NSSet;

@interface VFXCore.MTLLibraryWatcher : NSObject <NSFilePresenter> {

	 watchingFolderQueue;
	 block;

}

@property (readonly,nonatomic) NSURL * presentedItemURL; 
@property (readonly,nonatomic) NSOperationQueue * presentedItemOperationQueue; 
-(id)init;
-(NSURL *)presentedItemURL;
-(NSOperationQueue *)presentedItemOperationQueue;
-(void)presentedItemDidChange;
@end

