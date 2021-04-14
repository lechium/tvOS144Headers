/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:25:37 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class MPModelStoreBrowseSectionBuilder, MPModelStoreBrowseContentItemBuilder, NSIndexSet, MPSectionedCollection, ICUserIdentity, NSDictionary, NSRegularExpression, NSString;

@interface MPModelStoreGroupingsMusicKitResponseParser : NSObject {

	long long _parseOnceToken;
	id _rawResponseOutput;
	MPModelStoreBrowseSectionBuilder* _sectionBuilder;
	MPModelStoreBrowseContentItemBuilder* _contentItemBuilder;
	NSIndexSet* _filteredFCKinds;
	MPSectionedCollection* _results;
	ICUserIdentity* _userIdentity;
	unsigned long long _options;
	NSDictionary* _storeBagDictionary;
	NSRegularExpression* _storeBagLinkRegularExpression;
	NSString* _rootObjectIdentifier;

}

@property (nonatomic,readonly) MPSectionedCollection * results; 
-(id)description;
-(MPSectionedCollection *)results;
-(id)initWithRawResponseOutput:(id)arg1 sectionBuilder:(id)arg2 contentItemBuilder:(id)arg3 filteredFCKinds:(id)arg4 userIdentity:(id)arg5 rootObjectIdentifier:(id)arg6 options:(unsigned long long)arg7 storeBagDictionary:(id)arg8 ;
-(id)_parsedSectionedCollection;
-(id)_parsedEditorialElements:(id)arg1 ;
-(id)_parsedEditorialElementX:(id)arg1 ;
-(id)_parsedEditorialElement:(id)arg1 ;
-(id)bagRoomURLRegularExpression;
-(id)musicAPIURLWithLinkURLString:(id)arg1 ;
-(id)linkSectionWithDictionary:(id)arg1 ;
-(long long)featuredContentKindForNode:(id)arg1 ;
-(id)attributesForContentNode:(id)arg1 ;
-(id)firstChildOfContentNode:(id)arg1 ;
-(id)childrenOfContentNode:(id)arg1 ;
-(id)linksForContentNode:(id)arg1 ;
-(BOOL)featuredContentKindCorrespondsToItem:(id)arg1 ;
-(BOOL)isContentNodeAnEditorialElement:(id)arg1 ;
-(id)_parsedContentNode:(id)arg1 uniformContentItemTypeResolver:(id)arg2 additionalAttributesFromParent:(id)arg3 ;
@end
