/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:32:37 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/HIDPlugins/IOHIDKeyboardFilter.plugin/IOHIDKeyboardFilter
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


#import <IOHIDKeyboardFilter/IOHIDKeyboardFilter-Structs.h>
@interface StickyKeyHandler : NSObject {

	IOHIDKeyboardFilter* _filter;
	IOHIDServiceRef _service;

}
-(void)removeObserver;
-(id)initWithFilter:(IOHIDKeyboardFilter*)arg1 service:(IOHIDServiceRef)arg2 ;
-(void)StickyKeyNotification:(id)arg1 ;
@end

