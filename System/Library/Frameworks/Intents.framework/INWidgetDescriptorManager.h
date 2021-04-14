/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:22:26 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/Frameworks/Intents.framework/Intents
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol OS_dispatch_queue;
@class NSMutableArray, INWatchdogTimer, NSObject, NSSet;

@interface INWidgetDescriptorManager : NSObject {

	BOOL _observing;
	NSMutableArray* _completionHandlers;
	INWatchdogTimer* _watchdogTimer;
	NSObject*<OS_dispatch_queue> _queue;
	NSSet* _widgetDescriptors;

}

@property (nonatomic,copy) NSSet * widgetDescriptors;              //@synthesize widgetDescriptors=_widgetDescriptors - In the implementation block
+(id)sharedManager;
-(id)init;
-(void)dealloc;
-(void)getDescriptorsWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)getDescriptorForIntent:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)_startObservingDescriptors;
-(void)_notifyCompletionHandlersWithWidgetDescriptors:(id)arg1 ;
-(NSSet *)widgetDescriptors;
-(void)setWidgetDescriptors:(NSSet *)arg1 ;
@end
