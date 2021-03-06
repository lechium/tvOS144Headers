/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:36:11 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/SiriTVUI.framework/SiriTVUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <SiriTVUI/SiriTVUITabularDataRowAction.h>

@protocol SAServerBoundCommand;
@interface SiriTVUITabularDataRowActionShowModalSnippet : SiriTVUITabularDataRowAction {

	id<SAServerBoundCommand> _fetchContentCommand;

}

@property (nonatomic,retain) id<SAServerBoundCommand> fetchContentCommand;              //@synthesize fetchContentCommand=_fetchContentCommand - In the implementation block
-(id<SAServerBoundCommand>)fetchContentCommand;
-(void)setFetchContentCommand:(id<SAServerBoundCommand>)arg1 ;
-(id)initWithFetchContentCommand:(id)arg1 ;
@end

