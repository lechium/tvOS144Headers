/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:22:25 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/Frameworks/Intents.framework/Intents
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

@class NSArray, INMediaSearch, INMediaDestination, INPrivateAddMediaIntentData;


@protocol INAddMediaIntentExport <NSObject,JSExport>
@property (nonatomic,copy) NSArray * mediaItems; 
@property (nonatomic,copy) INMediaSearch * mediaSearch; 
@property (nonatomic,copy) INMediaDestination * mediaDestination; 
@property (nonatomic,copy) INPrivateAddMediaIntentData * privateAddMediaIntentData; 
@required
-(id)init;
-(NSArray *)mediaItems;
-(void)setMediaItems:(id)arg1;
-(INMediaSearch *)mediaSearch;
-(void)setMediaSearch:(id)arg1;
-(INMediaDestination *)mediaDestination;
-(void)setMediaDestination:(id)arg1;
-(INPrivateAddMediaIntentData *)privateAddMediaIntentData;
-(void)setPrivateAddMediaIntentData:(id)arg1;

@end

