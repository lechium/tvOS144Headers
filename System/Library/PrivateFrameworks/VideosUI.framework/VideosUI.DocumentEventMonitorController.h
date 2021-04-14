/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:38:32 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/VUIAppDocumentUpdateEventMonitorObserving.h>

@interface VideosUI.DocumentEventMonitorController : NSObject <VUIAppDocumentUpdateEventMonitorObserving> {

	 isDocumentDirty;
	 templateViewModel;
	 controllerName;
	 eventEligibleViewModels;
	 $__lazy_storage_$_updateEventStore;
	 documentEventIterable;
	 lastMonitoringReason;
	 hasRefreshEvents;
	 isDocumentDirtyForRefreshEvents;
	 registrationHandler;
	 isSuspended;

}
-(id)init;
-(void)appDocumentDidReceiveEvent:(id)arg1 ;
-(void)appDocumentHasBecomeActive;
@end

