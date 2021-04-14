/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:25:41 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class MPModelStoreBrowseSectionBuilder, MPModelStoreBrowseContentItemBuilder, NSIndexSet, MPSectionedCollection, ICUserIdentity;

@interface MPModelStoreBrowseRoomMusicKitResponseParser : NSObject {

	long long _parseOnceToken;
	id _rawResponseOutput;
	MPModelStoreBrowseSectionBuilder* _sectionBuilder;
	MPModelStoreBrowseContentItemBuilder* _contentItemBuilder;
	NSIndexSet* _filteredFCKinds;
	MPSectionedCollection* _results;
	ICUserIdentity* _userIdentity;

}

@property (nonatomic,readonly) MPSectionedCollection * results; 
-(MPSectionedCollection *)results;
-(id)_parsedSectionedCollection;
-(id)initWithRawResponseOutput:(id)arg1 sectionBuilder:(id)arg2 contentItemBuilder:(id)arg3 filteredFCKinds:(id)arg4 userIdentity:(id)arg5 ;
-(id)_parsedElements:(id)arg1 ;
-(id)_parsedContentNode:(id)arg1 additionalAttributesFromParent:(id)arg2 ;
@end

