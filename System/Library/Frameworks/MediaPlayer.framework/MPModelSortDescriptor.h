/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:25:40 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <Foundation/NSSortDescriptor.h>

@class NSArray;

@interface MPModelSortDescriptor : NSSortDescriptor {

	NSArray* _keyPath;

}

@property (nonatomic,copy) NSArray * keyPath;              //@synthesize keyPath=_keyPath - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)sortDescriptorWithKeyPath:(id)arg1 ascending:(BOOL)arg2 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSArray *)keyPath;
-(void)setKeyPath:(NSArray *)arg1 ;
@end
