// VDDModelKeys.h
//
// Copyright (c) 2014 Venmo
//
// Permission is hereby granted, free of charge, to any person obtaining a copy
// of this software and associated documentation files (the "Software"), to deal
// in the Software without restriction, including without limitation the rights
// to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
// copies of the Software, and to permit persons to whom the Software is
// furnished to do so, subject to the following conditions:
//
// The above copyright notice and this permission notice shall be included in
// all copies or substantial portions of the Software.
//
// THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
// IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
// FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
// AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
// LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
// OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN
// THE SOFTWARE.

typedef NS_ENUM(NSUInteger, VDDAppDistributionType) {
    VDDAppDistributionTypeInternal = 1,
    VDDAppDistributionTypePublic = 2
};

#define VDDModelApp @"VDDModelApp"

#define VDDAppKeyName @"name"
#define VDDAppKeyDescription @"description"
#define VDDAppKeyDetails @"details"
#define VDDAppKeyImage @"image"
#define VDDAppKeyInstallUrl @"install_url"
#define VDDAppKeyShareUrl @"share_url"
#define VDDAppKeyVersionNumber @"version_number"
#define VDDAppKeySharable @"sharable"
#define VDDAppKeyType @"type"


#define VDDModelUser @"VDDModelUser"
#define VDDUserKeyAdvertisingID @"advertising_id"
#define VDDUserKeyPushToken @"push_token"

void createDemoObject();