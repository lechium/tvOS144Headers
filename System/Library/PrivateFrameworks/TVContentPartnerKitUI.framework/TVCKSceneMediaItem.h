/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:36:20 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/TVContentPartnerKitUI.framework/TVContentPartnerKitUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol TVPMediaItem;
@class NSObject, NSSet, NSMutableDictionary;

@interface TVCKSceneMediaItem : NSObject {

	NSObject*<TVPMediaItem> _mediaItem;
	NSSet* _localMetadataKeys;
	NSMutableDictionary* _localMetadata;

}

@property (nonatomic,retain) NSObject*<TVPMediaItem> mediaItem;                //@synthesize mediaItem=_mediaItem - In the implementation block
@property (nonatomic,retain) NSSet * localMetadataKeys;                        //@synthesize localMetadataKeys=_localMetadataKeys - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * localMetadata;              //@synthesize localMetadata=_localMetadata - In the implementation block
-(BOOL)isKindOfClass:(Class)arg1 ;
-(BOOL)respondsToSelector:(SEL)arg1 ;
-(BOOL)conformsToProtocol:(id)arg1 ;
-(id)methodSignatureForSelector:(SEL)arg1 ;
-(void)forwardInvocation:(id)arg1 ;
-(id)forwardingTargetForSelector:(SEL)arg1 ;
-(void)dealloc;
-(NSObject*<TVPMediaItem>)mediaItem;
-(void)setMediaItem:(NSObject*<TVPMediaItem>)arg1 ;
-(void)setMediaItemMetadata:(id)arg1 forProperty:(id)arg2 ;
-(BOOL)hasTrait:(id)arg1 ;
-(id)mediaItemMetadataForProperty:(id)arg1 ;
-(id)initWithMediaItem:(id)arg1 sceneTimeRange:(id)arg2 ;
-(void)_mediaItemMetadataWillOrDidChange:(id)arg1 ;
-(NSSet *)localMetadataKeys;
-(void)setLocalMetadataKeys:(NSSet *)arg1 ;
-(NSMutableDictionary *)localMetadata;
-(void)setLocalMetadata:(NSMutableDictionary *)arg1 ;
@end

