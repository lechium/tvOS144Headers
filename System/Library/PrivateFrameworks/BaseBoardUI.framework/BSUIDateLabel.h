/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:24:43 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/BaseBoardUI.framework/BaseBoardUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol BSUIDateLabel <NSObject>
@property (assign,getter=isAllDay,nonatomic) BOOL allDay; 
@property (assign,nonatomic,__weak) id<BSUIDateLabelDelegate> delegate; 
@property (assign,nonatomic) long long labelType; 
@property (assign,nonatomic) BOOL isTimestamp; 
@required
-(id<BSUIDateLabelDelegate>)delegate;
-(void)setDelegate:(id)arg1;
-(void)prepareForReuse;
-(long long)labelType;
-(void)setLabelType:(long long)arg1;
-(void)setAllDay:(BOOL)arg1;
-(BOOL)isAllDay;
-(void)startCoalescingUpdates;
-(void)setStartDate:(id)arg1 withTimeZone:(id)arg2;
-(void)setEndDate:(id)arg1 withTimeZone:(id)arg2;
-(void)stopCoalescingUpdates;
-(BOOL)isTimestamp;
-(void)setIsTimestamp:(BOOL)arg1;

@end

