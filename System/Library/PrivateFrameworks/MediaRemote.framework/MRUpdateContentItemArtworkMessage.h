/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:23:04 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/MediaRemote.framework/MediaRemote
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <MediaRemote/MRProtocolMessage.h>

@class MRPlayerPath, NSArray;

@interface MRUpdateContentItemArtworkMessage : MRProtocolMessage

@property (nonatomic,readonly) MRPlayerPath * playerPath; 
@property (nonatomic,readonly) NSArray * contentItems; 
-(unsigned long long)type;
-(NSArray *)contentItems;
-(MRPlayerPath *)playerPath;
-(id)initWithContentItems:(id)arg1 forPlayerPath:(id)arg2 ;
@end
