/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:26:05 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/Frameworks/AVKit.framework/AVKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <AVKit/AVAirTransportTransformationProtocol.h>

@class NSString;

@interface AVDataValueTransformer : NSObject <AVAirTransportTransformationProtocol>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)messageTransformerWithClass:(Class)arg1 ;
-(id)dataForMessage:(id)arg1 ;
-(id)reverseTransformerForMessageData:(id)arg1 ;
@end

