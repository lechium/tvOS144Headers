/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:23:57 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/Frameworks/EventKit.framework/EventKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <EventKit/EKObjectChange.h>

@interface EKCalendarChange : EKObjectChange {

	BOOL _titleChanged;
	BOOL _colorChanged;
	BOOL _orderChanged;

}

@property (nonatomic,readonly) BOOL titleChanged;              //@synthesize titleChanged=_titleChanged - In the implementation block
@property (nonatomic,readonly) BOOL colorChanged;              //@synthesize colorChanged=_colorChanged - In the implementation block
@property (nonatomic,readonly) BOOL orderChanged;              //@synthesize orderChanged=_orderChanged - In the implementation block
+(int)entityType;
+(void)fetchCalendarChangesInStore:(id)arg1 resultHandler:(/*^block*/id)arg2 ;
+(void)fetchCalendarChangesInSource:(id)arg1 resultHandler:(/*^block*/id)arg2 ;
-(BOOL)titleChanged;
-(id)initWithChangeProperties:(id)arg1 ;
-(BOOL)colorChanged;
-(BOOL)orderChanged;
@end

