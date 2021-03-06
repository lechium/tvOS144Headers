/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:24:44 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/Frameworks/ContactsUI.framework/ContactsUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/CNUIPeopleSource.h>

@class CNFavorites, CNContactStore, NSArray, NSString;

@interface CNUIFavoritesPeopleSource : NSObject <CNUIPeopleSource> {

	CNFavorites* _favorites;
	CNContactStore* _contactStore;
	NSArray* _cachedPeople;

}

@property (nonatomic,retain) CNFavorites * favorites;                    //@synthesize favorites=_favorites - In the implementation block
@property (nonatomic,retain) CNContactStore * contactStore;              //@synthesize contactStore=_contactStore - In the implementation block
@property (nonatomic,retain) NSArray * cachedPeople;                     //@synthesize cachedPeople=_cachedPeople - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sourceKind;
+(id)sourceWithEnvironment:(id)arg1 contactStore:(id)arg2 ;
-(id)groups;
-(CNContactStore *)contactStore;
-(void)setContactStore:(CNContactStore *)arg1 ;
-(NSArray *)cachedPeople;
-(void)setCachedPeople:(NSArray *)arg1 ;
-(id)peopleInGroup:(id)arg1 keysToFetch:(id)arg2 ;
-(void)setFavorites:(CNFavorites *)arg1 ;
-(CNFavorites *)favorites;
@end

