/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:31:58 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/Assistant/Plugins/Media.assistantBundle/Media
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <SAObjects/SAMPSearch.h>
#import <libobjc.A.dylib/AFServiceCommand.h>

@class NSString, ICUserIdentity;

@interface MPAssistantSearch : SAMPSearch <AFServiceCommand> {

	NSString* _requestAceHash;
	ICUserIdentity* _userIdentity;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)_perform;
-(void)performWithCompletion:(/*^block*/id)arg1 ;
-(void)_prepare;
-(id)_playlistsByDateCreatedOrder:(id)arg1 ;
-(id)_songCollectionsWithGroupingType:(long long)arg1 searchString:(id)arg2 mediaTypes:(long long)arg3 ;
-(id)_itemsByTitle:(id)arg1 mediaTypes:(long long)arg2 ;
-(id)_playlistsByName:(id)arg1 isGeniusMix:(BOOL)arg2 ;
-(id)_audiobooksByName:(id)arg1 ;
-(id)_stationDictionariesWithParent:(unsigned long long)arg1 ;
-(id)_stationDictionaryForGenreName:(id)arg1 parent:(unsigned long long)arg2 ;
-(id)_stationWithName:(id)arg1 ;
-(id)_stationDictionaryForGenreName:(id)arg1 ;
@end
