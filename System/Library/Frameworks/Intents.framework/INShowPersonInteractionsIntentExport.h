/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:22:21 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/Frameworks/Intents.framework/Intents
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

@class INPerson, NSString;


@protocol INShowPersonInteractionsIntentExport <NSObject,JSExport>
@property (nonatomic,copy) INPerson * person; 
@property (nonatomic,copy) NSString * focusItemIdentifier; 
@required
-(id)init;
-(INPerson *)person;
-(void)setPerson:(id)arg1;
-(NSString *)focusItemIdentifier;
-(void)setFocusItemIdentifier:(id)arg1;

@end

