/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:25:39 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


#import <MediaPlayer/MediaPlayer-Structs.h>
@class UIImage, AVAsset;

@interface MPArtworkRepresentation : NSObject {

	long long _kind;
	UIImage* _image;
	AVAsset* _video;
	id _representationToken;
	CGSize _representationSize;

}

@property (assign,nonatomic) long long kind;                         //@synthesize kind=_kind - In the implementation block
@property (nonatomic,retain) UIImage * image;                        //@synthesize image=_image - In the implementation block
@property (nonatomic,retain) AVAsset * video;                        //@synthesize video=_video - In the implementation block
@property (assign,nonatomic) CGSize representationSize;              //@synthesize representationSize=_representationSize - In the implementation block
@property (nonatomic,retain) id representationToken;                 //@synthesize representationToken=_representationToken - In the implementation block
+(id)representationWithSize:(CGSize)arg1 image:(id)arg2 ;
+(id)representationWithSize:(CGSize)arg1 video:(id)arg2 ;
-(long long)kind;
-(void)setKind:(long long)arg1 ;
-(UIImage *)image;
-(void)setImage:(UIImage *)arg1 ;
-(id)debugQuickLookObject;
-(AVAsset *)video;
-(void)setVideo:(AVAsset *)arg1 ;
-(CGSize)representationSize;
-(void)setRepresentationSize:(CGSize)arg1 ;
-(id)representationToken;
-(void)setRepresentationToken:(id)arg1 ;
@end

