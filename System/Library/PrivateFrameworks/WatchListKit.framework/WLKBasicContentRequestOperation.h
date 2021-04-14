/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:28:31 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/WatchListKit.framework/WatchListKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <WatchListKit/WLKUTSNetworkRequestOperation.h>

@class NSArray, WLKBasicContentRequestResponse, WLKBasicContentMetadata;

@interface WLKBasicContentRequestOperation : WLKUTSNetworkRequestOperation {

	NSArray* _contentIDs;
	WLKBasicContentRequestResponse* _response;

}

@property (nonatomic,copy,readonly) NSArray * contentIDs;                                   //@synthesize contentIDs=_contentIDs - In the implementation block
@property (nonatomic,readonly) WLKBasicContentRequestResponse * response;                   //@synthesize response=_response - In the implementation block
@property (nonatomic,readonly) WLKBasicContentMetadata * basicContentMetadata; 
-(WLKBasicContentRequestResponse *)response;
-(void)processResponse;
-(id)initWithContentIDs:(id)arg1 caller:(id)arg2 ;
-(id)initWithContentID:(id)arg1 caller:(id)arg2 ;
-(WLKBasicContentMetadata *)basicContentMetadata;
-(NSArray *)contentIDs;
@end

