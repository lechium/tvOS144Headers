/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:20:18 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/SpringBoardServices.framework/SpringBoardServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol OS_dispatch_queue;
@class NSObject, NSSet;

@interface _SBSDisplayIdentifiersCache : NSObject {

	NSObject*<OS_dispatch_queue> _queue;
	NSSet* _displayIdentifiers;
	int _changedToken;
	/*^block*/id _changedBlock;

}
+(id)sharedInstance;
-(id)init;
-(void)dealloc;
-(void)_queue_noteChanged;
-(id)displayIdentifiers;
-(void)registerChangedBlock:(/*^block*/id)arg1 ;
@end

