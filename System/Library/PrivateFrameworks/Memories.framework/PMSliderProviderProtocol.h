/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:31:09 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/Memories.framework/Memories
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol PMSliderProviderProtocol <PMEditProviderProtocol>
@property (assign,nonatomic) unsigned long long selectedIndex; 
@required
-(unsigned long long)numberOfItems;
-(void)setSelectedIndex:(unsigned long long)arg1;
-(unsigned long long)selectedIndex;
-(id)displayNameForIndex:(unsigned long long)arg1;
-(void)updateLocalizedNames;
-(void)willBeginScrolling;

@end

