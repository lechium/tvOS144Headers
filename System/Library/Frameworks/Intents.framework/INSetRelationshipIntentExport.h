/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:22:27 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/Frameworks/Intents.framework/Intents
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

@class NSArray, INModifyRelationship;


@protocol INSetRelationshipIntentExport <NSObject,JSExport>
@property (nonatomic,copy) NSArray * contactIdentifiers; 
@property (nonatomic,copy) INModifyRelationship * targetRelationship; 
@required
-(id)init;
-(NSArray *)contactIdentifiers;
-(void)setContactIdentifiers:(id)arg1;
-(INModifyRelationship *)targetRelationship;
-(void)setTargetRelationship:(id)arg1;

@end

