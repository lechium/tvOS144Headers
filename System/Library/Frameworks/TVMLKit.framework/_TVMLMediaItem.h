/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:32:28 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/Frameworks/TVMLKit.framework/TVMLKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <TVMLKit/TVMediaItem.h>

@protocol TVPMediaItem;
@class _TVSecureKeyLoader;

@interface _TVMLMediaItem : TVMediaItem {

	_TVSecureKeyLoader* _secureKeyLoader;
	id<TVPMediaItem> _tvpObject;

}

@property (nonatomic,readonly) id<TVPMediaItem> tvpObject;              //@synthesize tvpObject=_tvpObject - In the implementation block
-(id)init;
-(void)setUrl:(id)arg1 ;
-(void)setTitle:(id)arg1 ;
-(void)setSubtitle:(id)arg1 ;
-(void)setContentRating:(id)arg1 ;
-(void)setExternalIdentifier:(id)arg1 ;
-(void)setPlaybackProgress:(id)arg1 ;
-(void)setInterstitials:(id)arg1 ;
-(void)setContentRatingRanking:(id)arg1 ;
-(void)setArtworkImageURL:(id)arg1 ;
-(void)setResumeTime:(double)arg1 ;
-(void)setContentRatingDomain:(id)arg1 ;
-(void)setContentProposalAutomaticAcceptanceInterval:(double)arg1 ;
-(void)setContentProposalPresentationTime:(double)arg1 ;
-(void)setHighlightGroups:(id)arg1 ;
-(void)setItemDescription:(id)arg1 ;
-(void)setSecureKeyLoader:(id)arg1 ;
-(id)secureKeyLoader;
-(id)_tvpObject;
-(void)setContainsExplicitContent:(BOOL)arg1 ;
-(void)setExternalProfileIdentifier:(id)arg1 ;
-(void)setExternalServiceIdentifier:(id)arg1 ;
-(id<TVPMediaItem>)tvpObject;
@end
