/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:22:25 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/Frameworks/Intents.framework/Intents
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

@class NSArray;


@protocol INSearchForTimersIntentResponseExport <NSObject,JSExport>
@property (nonatomic,readonly) long long code; 
@property (nonatomic,copy) NSArray * matchedTimers; 
@property (nonatomic,copy) NSArray * unmatchedTimers; 
@required
-(long long)code;
-(NSArray *)matchedTimers;
-(void)setMatchedTimers:(id)arg1;
-(NSArray *)unmatchedTimers;
-(void)setUnmatchedTimers:(id)arg1;

@end

