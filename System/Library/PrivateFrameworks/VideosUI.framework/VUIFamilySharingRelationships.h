/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:38:30 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class VUIFamilySharingRelationship, VUIFamilySharingPlaybackPositionRelationship;

@interface VUIFamilySharingRelationships : NSObject {

	VUIFamilySharingRelationship* _season;
	VUIFamilySharingRelationship* _show;
	VUIFamilySharingPlaybackPositionRelationship* _playbackPosition;

}

@property (nonatomic,retain) VUIFamilySharingRelationship * season;                                        //@synthesize season=_season - In the implementation block
@property (nonatomic,retain) VUIFamilySharingRelationship * show;                                          //@synthesize show=_show - In the implementation block
@property (nonatomic,retain) VUIFamilySharingPlaybackPositionRelationship * playbackPosition;              //@synthesize playbackPosition=_playbackPosition - In the implementation block
-(VUIFamilySharingRelationship *)show;
-(void)setPlaybackPosition:(VUIFamilySharingPlaybackPositionRelationship *)arg1 ;
-(VUIFamilySharingPlaybackPositionRelationship *)playbackPosition;
-(VUIFamilySharingRelationship *)season;
-(void)setSeason:(VUIFamilySharingRelationship *)arg1 ;
-(void)setShow:(VUIFamilySharingRelationship *)arg1 ;
@end

