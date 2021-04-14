/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:24:48 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/Frameworks/ContactsUI.framework/ContactsUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSCountedSet, NSMutableSet, CNContact, NSArray, NSDate;

@interface CNQuickActionsUsageManager : NSObject {

	BOOL _sortsWithDuet;
	NSCountedSet* _actionsUsageSet;
	NSMutableSet* _enabledActionIdentifiers;
	CNContact* _contact;
	NSArray* _cachedInteractions;
	NSDate* _cachedInteractionsDate;

}

@property (nonatomic,retain) NSCountedSet * actionsUsageSet;                       //@synthesize actionsUsageSet=_actionsUsageSet - In the implementation block
@property (nonatomic,retain) NSMutableSet * enabledActionIdentifiers;              //@synthesize enabledActionIdentifiers=_enabledActionIdentifiers - In the implementation block
@property (nonatomic,retain) CNContact * contact;                                  //@synthesize contact=_contact - In the implementation block
@property (nonatomic,retain) NSArray * cachedInteractions;                         //@synthesize cachedInteractions=_cachedInteractions - In the implementation block
@property (nonatomic,retain) NSDate * cachedInteractionsDate;                      //@synthesize cachedInteractionsDate=_cachedInteractionsDate - In the implementation block
@property (assign,nonatomic) BOOL sortsWithDuet;                                   //@synthesize sortsWithDuet=_sortsWithDuet - In the implementation block
+(id)managerForContact:(id)arg1 ;
+(BOOL)sortUsingCoreDuetAvailable;
-(id)init;
-(CNContact *)contact;
-(void)setContact:(CNContact *)arg1 ;
-(void)setSortsWithDuet:(BOOL)arg1 ;
-(BOOL)sortsWithDuet;
-(void)updateCachedEnabledStateForAction:(id)arg1 ;
-(void)cacheEnabledStateForAction:(id)arg1 ;
-(id)sortedActions:(id)arg1 ;
-(void)actionPerformed:(id)arg1 ;
-(double)scoreForAction:(id)arg1 ;
-(NSCountedSet *)actionsUsageSet;
-(void)setCachedInteractions:(NSArray *)arg1 ;
-(NSArray *)cachedInteractions;
-(NSMutableSet *)enabledActionIdentifiers;
-(NSDate *)cachedInteractionsDate;
-(void)setCachedInteractionsDate:(NSDate *)arg1 ;
-(void)_updateDuetInteractionsIfNeeded;
-(void)setActionsUsageSet:(NSCountedSet *)arg1 ;
-(void)setEnabledActionIdentifiers:(NSMutableSet *)arg1 ;
@end

